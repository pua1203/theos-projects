/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIButton, UIView, UILabel, NSArray, AudioAudiosSpecialBlock;
@protocol VKMNavDelegate;

__attribute__((visibility("hidden")))
@interface AudioAudiosSpecialBlockView : XXUnknownSuperclass {
	AudioAudiosSpecialBlock* _domain;
	id<VKMNavDelegate> _delegate;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIButton* _button;
	NSArray* _covers;
	UIView* _coversView;
}
@property(assign, nonatomic) __weak id<VKMNavDelegate> delegate;
@property(retain, nonatomic) AudioAudiosSpecialBlock* domain;
@property(retain, nonatomic) UIView* coversView;
@property(retain, nonatomic) NSArray* covers;
@property(retain, nonatomic) UIButton* button;
@property(retain, nonatomic) UILabel* subtitleLabel;
@property(retain, nonatomic) UILabel* titleLabel;
+(float)height;
+(float)middleCoverSide;
-(void).cxx_destruct;
-(void)expandPlayerPlaylistWithMoreAudiosIfNeeded:(id)moreAudiosIfNeeded;
-(void)actionPlayButton:(id)button;
-(void)actionShowAllButton:(id)button;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)frame;
@end

