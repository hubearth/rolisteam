/***************************************************************************
 *	Copyright (C) 2019 by Renaud Guezennec                               *
 *   http://www.rolisteam.org/contact                                      *
 *                                                                         *
 *   This software is free software; you can redistribute it and/or modify *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/
#include "iohelper.h"

#include <QColor>
#include <QDataStream>
#include <QFile>
#include <QString>
#include <QVariant>
#include <map>

#include "controller/view_controller/vectorialmapcontroller.h"
#include "data/cleveruri.h"
#include "vmap/vmap.h"

#include "vmap/items/characteritem.h"
#include "vmap/items/ellipsitem.h"
#include "vmap/items/imageitem.h"
#include "vmap/items/lineitem.h"
#include "vmap/items/pathitem.h"
#include "vmap/items/rectitem.h"
#include "vmap/items/textitem.h"

IOHelper::IOHelper() {}

bool IOHelper::loadVMap(VMap* vmap, CleverURI* uri, VectorialMapController* ctrl)
{
    /*  if(vmap == nullptr || nullptr == uri || nullptr == ctrl)
          return false;

      auto path= uri->getUri();
      QIODevice* device= nullptr;
      if(!path.isEmpty() && uri->loadingMode() == CleverURI::Linked)
          device= new QFile(path);
      else if(uri->hasData() && uri->loadingMode() == CleverURI::Internal)
      {
          auto data= uri->getData();
          device= new QBuffer(&data);
      }

      if(!device->open(QIODevice::ReadOnly))
          return false;
      QDataStream reader(device);
      reader.setVersion(QDataStream::Qt_5_7);

      int zIndex, propertyCount, itemCount;
      QString name;
      QColor bgColor;

      reader >> name;
      reader >> bgColor;
      reader >> zIndex;
      reader >> propertyCount;

      ctrl->setName(name);
      ctrl->setBackgroundColor(bgColor);

      bool b;
      reader >> b;
      ctrl->setNpcNameVisible(b);
      reader >> b;
      ctrl->setPcNameVisible(b);
      reader >> b;
      ctrl->setNpcNumberVisible(b);
      reader >> b;
      ctrl->setHealthBarVisible(b);
      reader >> b;
      ctrl->setInitScoreVisible(b);
      reader >> b;
      ctrl->setGridVisibility(b);
      int interger;
      reader >> interger;
      ctrl->setGridPattern(static_cast<Core::GridPattern>(interger));
      QColor color;
      reader >> color;
      ctrl->setGridColor(color);
      reader >> interger;
      ctrl->setGridSize(interger);
      qreal real;
      reader >> real;
      ctrl->setGridScale(real);
      reader >> interger;
      ctrl->setScaleUnit(static_cast<Core::ScaleUnit>(interger));
      reader >> b;
      ctrl->setCharacterVision(b);
      reader >> interger;
      ctrl->setPermission(static_cast<Core::PermissionMode>(interger));
      reader >> b;
      ctrl->setCollision(b);
      reader >> b;
      ctrl->setGridAbove(b);
      reader >> interger;
      ctrl->setVisibility(static_cast<Core::VisibilityMode>(interger));
      reader >> b;
      ctrl->setHealthBarVisible(b);
      reader >> interger;
      ctrl->setLayer(static_cast<Core::Layer>(interger));*/

    /*auto fogItem= vmap->getFogItem();
    reader >> *fogItem;*/

    /* reader >> itemCount;
     for(int i= 0; i < itemCount; ++i)
     {
         VisualItem* item= nullptr;
         int contentType;
         reader >> contentType;

         switch(static_cast<VisualItem::ItemType>(contentType))
         {
         case VisualItem::TEXT:
             item= new TextItem(ctrl);
             break;
         case VisualItem::CHARACTER:
             item= new CharacterItem(ctrl);
             break;
         case VisualItem::LINE:
             item= new LineItem(ctrl);

             break;
         case VisualItem::RECT:
             item= new RectItem(ctrl);
             break;
         case VisualItem::ELLISPE:
             item= new EllipsItem(ctrl);
             break;
         case VisualItem::PATH:
             item= new PathItem(ctrl);
             break;
         case VisualItem::SIGHT:
             item= vmap->getFogItem();
             break;
         case VisualItem::GRID:
             item= vmap->getGridItem();
             break;
         case VisualItem::IMAGE:
             item= new ImageItem(ctrl);
             break;
         default:
             break;
         }
         if(nullptr == item)
             continue;

         reader >> *item;

         qreal x, y;
         reader >> x;
         reader >> y;
         // addNewItem(new AddVmapItemCommand(item, false, this), false);
         vmap->addItem(item);

         item->setPos(x, y);
         item->initChildPointItem();
     }*/
    return true;
}
