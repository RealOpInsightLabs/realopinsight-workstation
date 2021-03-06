/*
 * Stats.hpp
# ------------------------------------------------------------------------ #
# Copyright (c) 2010-2014 Rodrigue Chakode (rodrigue.chakode@gmail.com)    #
# Last Update : 23-03-2013                                                 #
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

#ifndef SNAVSTATSLEGEND_HPP_
#define SNAVSTATSLEGEND_HPP_
#include "Base.hpp"
#include <QtGui>
#include <QWidget>

class StatsLegend : public QWidget
{
public:
  StatsLegend(const QPoint & _top_corner =  QPoint(0, 0), QWidget * _parent = 0);

  QSize minimumSizeHint() const;
  QSize sizeHint() const;

protected:
  void paintEvent(QPaintEvent *event);

private :
  QPainterPath normal;
  QPainterPath minor;
  QPainterPath major;
  QPainterPath critical;
  QPainterPath unknown;
  QPoint leftTopCorner;
};

#endif /* SNAVSTATSLEGEND_HPP_ */
