/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIButton;

__attribute__((visibility("hidden")))
@interface ToolbarButtonWithCounterItem : XXUnknownSuperclass {
	UIButton* _button;
	int _count;
}
@property(assign, nonatomic) int count;
@property(readonly, assign, nonatomic) UIButton* button;
+(id)vk_itemWithImageNamed:(id)imageNamed target:(id)target action:(SEL)action;
-(void).cxx_destruct;
-(id)initWithImage:(id)image style:(int)style target:(id)target action:(SEL)action;
-(id)initWithImage:(id)image target:(id)target action:(SEL)action;
@end
