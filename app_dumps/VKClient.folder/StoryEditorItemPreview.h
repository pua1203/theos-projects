/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"

@protocol StoryEditorItem;

@protocol StoryEditorItemPreview <NSObject>
@property(readonly, assign, nonatomic) id<StoryEditorItem> item;
@optional
-(void)setMuted:(BOOL)muted;
-(void)didDisappear;
-(void)willDisappear;
-(void)didAppear;
-(void)willAppear;
@end

