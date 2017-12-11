/*
# GuiDashboard.hpp
# ------------------------------------------------------------------------ #
# Copyright (c) 2010-2014 Rodrigue Chakode (rodrigue.chakode@gmail.com)    #
# Last Update: 23-03-2014                                                  #
#                                                                          #
# This file is part of RealOpInsight (http://RealOpInsight.com) authored   #
# by Rodrigue Chakode <rodrigue.chakode@gmail.com>                         #
#                                                                          #
# RealOpInsight is free software: you can redistribute it and/or modify    #
# it under the terms of the GNU General Public License as published by     #
# the Free Software Foundation, either version 3 of the License, or        #
# (at your option) any later version.                                      #
#                                                                          #
# The Software is distributed in the hope that it will be useful,          #
# but WITHOUT ANY WARRANTY; without even the implied warranty of           #
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the            #
# GNU General Public License for more details.                             #
#                                                                          #
# You should have received a copy of the GNU General Public License        #
# along with RealOpInsight.  If not, see <http://www.gnu.org/licenses/>.   #
#--------------------------------------------------------------------------#
 */

#ifndef GUIDASHBOOARD_HPP
#define GUIDASHBOOARD_HPP

#include <QString>
#include "Base.hpp"
#include "PieChart.hpp"
#include "Parser.hpp"
#include "MsgConsole.hpp"
#include "GraphView.hpp"
#include "SvNavigatorTree.hpp"
#include "GuiPreferences.hpp"
#include "ZbxHelper.hpp"
#include "ZnsHelper.hpp"
#include "DashboardBase.hpp"

#ifndef REALOPINSIGHT_DISABLE_BROWSER
#include "WebKit.hpp"
#endif

class QScriptValueIterator;
class QSystemTrayIcon;

class GuiDashboard : public DashboardBase
{
  Q_OBJECT

public:
  GuiDashboard(const qint32& _userRole, const QString& _config);
  virtual ~GuiDashboard();

  QWidget* getWidget(void) const {return m_widget.get();}
  void resizeDashboard(qint32 width, qint32 height);
  void showTrayIcon(void) const {m_trayIcon->show();}
  void setTrayIconTooltip(const QString& msg) {m_trayIcon->setToolTip(msg);}
  void scalPaneContentsToViewPort(void) const;
  QList<QTreeWidgetItem*> getTreeSelectedItem() const {return m_tree->selectedItems();}
  QGraphicsItem* getMapNodeAt(const QPoint& pos) const {return m_map->nodeAtGlobalPos(pos);}
  QComboBox* getSourceSelectionBox(void) const {return m_sourceSelectionBox.get();}
  MsgConsole* getFilteredMsgConsole(void) const {return m_filteredMsgConsole.get();}
  bool hideChart(void);
  void setMsgPaneToolBar(const QList<QAction*>& menuAtions);
  GraphView* getMap(void) const {return m_map.get();}
  static StringMapT propRules();
  static StringMapT calcRules();

public Q_SLOTS:
  void handleShowAbout(void);
  void handleShowOnlineResources(void);
  void handleChangePasswordAction(void);
  void expandNode(const QString& _nodeId, const bool& _expand, const qint32& _level);
  void centerGraphOnNode(void) { centerGraphOnNode(m_selectedNode); }
  void centerGraphOnNode(const QString& _nodeId);
  void centerGraphOnNode(QTreeWidgetItem* _item);
  void filterNodeRelatedMsg(void);
  void filterNodeRelatedMsg(const QString& _nodeId);
  void handleTabChanged(int index) {Q_EMIT centralTabChanged(index);}
  void toggleTroubleView(bool _toggled);
  void toggleIncreaseMsgFont(bool _toggled);
  void handleSettingsLoaded(void);

Q_SIGNALS:
  void sortEventConsole(void);
  void centralTabChanged(int);

protected:
  virtual void updateTrayInfo(const NodeT& _node);
  QTabWidget* builtMsgPane(void);
  virtual void buildMap(void);
  virtual void updateMap(const NodeT& _node, const QString& _tip);
  virtual void buildTree(void);
  virtual void updateTree(const NodeT& _node, const QString& _tip);
  virtual void updateMsgConsole(const NodeT& _node);
  virtual void updateChart(void);
  virtual void updateEventFeeds(const NodeT& node);

private:
  enum {
    ConsoleTab=0,
    BrowserTab=1
  };

  GuiPreferences* m_changePasswdWindow;
  std::unique_ptr<MsgConsole> m_filteredMsgConsole;
  std::unique_ptr<QSplitter> m_widget;
  std::unique_ptr<PieChart> m_chart;
  std::unique_ptr<QSplitter> m_lelfSplitter;
  std::unique_ptr<QSplitter> m_rightSplitter;
  std::unique_ptr<QTabWidget> m_viewPanel;
  std::unique_ptr<GraphView> m_map;
  std::unique_ptr<SvNavigatorTree> m_tree;
  std::unique_ptr<MsgConsole> m_msgConsole;
  std::unique_ptr<QSystemTrayIcon> m_trayIcon;
  std::unique_ptr<QComboBox> m_sourceSelectionBox;
  std::unique_ptr<QTabWidget> m_msgPane;

  void addEvents(void);
  QTabWidget* newMsgConsole(void);
  void setBrowserSourceSelectionBx(void);
};
#endif /* GUIDASHBOOARD_HPP */
