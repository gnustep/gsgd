/* GDLegendBox.h - Draws a legend box  -*-objc-*-
   Copyright (C) 2002 Free Software Foundation, Inc.
   
   Written by: Nicola Pero <nicola@brainstorm.co.uk>
   July 2002

   This file is part of the GNUstep GD Library.

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.
   
   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.
   
   You should have received a copy of the GNU Library General Public
   License along with this library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111 USA.
*/ 

#ifndef _gsgd_GDLegendBox_h__
#define _gsgd_GDLegendBox_h__

#include <Foundation/NSObject.h>
#include <Foundation/NSGeometry.h>

@class GDFrame;
@class GDFont;
@class GDLineStyle;
@class NSMutableArray;

/* A GDLegendBox object draws a legend for a plot.  */

@interface GDLegendBox : NSObject
{
  GDFont *_font;

  /* The objects we display (an array of GDLineStyle)  */
  NSMutableArray *_objects;
  
  /* The explanatory strings corresponding to each object.  */
  NSMutableArray *_meanings;
}

- (id) init;

- (void) setExplanation: (NSString *)meaning
	       forStyle: (GDLineStyle *)style;

- (NSSize) comfortableSize;

- (void) plotInFrame: (GDFrame *)frame;

@end

#endif /* _gsgd_GDLegendBox_h__ */

