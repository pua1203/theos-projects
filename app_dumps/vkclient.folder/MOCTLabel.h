/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "vkclient-Structs.h"

@class MOCTRender, NSTextCheckingResult;
@protocol MOCTLabelDelegate;

__attribute__((visibility("hidden")))
@interface MOCTLabel : XXUnknownSuperclass {
	BOOL forced;
	MOCTRender* _render;
	id<MOCTLabelDelegate> _delegate;
	NSTextCheckingResult* _activeLink;
}
@property(assign, nonatomic) id<MOCTLabelDelegate> delegate;
@property(retain, nonatomic) NSTextCheckingResult* activeLink;
@property(retain, nonatomic) MOCTRender* render;
-(unsigned long long)accessibilityTraits;
-(id)accessibilityLabel;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(id)linkForTouch:(id)touch;
-(void)setAttributedText:(id)text;
-(void)setText:(id)text;
-(void)render:(id)render force:(BOOL)force;
-(void)activateLink:(id)link;
-(void)updateWithText:(id)text;
-(void)layoutSubviews;
-(void)drawRect:(CGRect)rect;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
