/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import "NSObject.h"


@protocol CALayerDelegate <NSObject>
@optional
-(id)actionForLayer:(id)layer forKey:(id)key;
-(void)layoutSublayersOfLayer:(id)layer;
-(void)layerWillDraw:(id)layer;
-(void)drawLayer:(id)layer inContext:(CGContextRef)context;
-(void)displayLayer:(id)layer;
@end

