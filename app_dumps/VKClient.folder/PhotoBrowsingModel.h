/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "LoadingModel.h"

@class PhotoFeedContext;

__attribute__((visibility("hidden")))
@interface PhotoBrowsingModel : LoadingModel {
}
@property(retain, nonatomic) PhotoFeedContext* lastContext;
-(void)handleEditPhoto:(id)photo :(id)arg2;
-(void)handleDeletePhoto:(id)photo :(id)arg2;
-(void)handleLike:(id)like :(id)arg2;
-(void)handleAddComment:(id)comment :(id)arg2;
-(void)handleDeleteComment:(id)comment :(id)arg2;
-(void)handleComment:(id)comment offset:(int)offset :(id)arg3;
-(void)registerForEvents:(id)events;
-(id)total;
-(unsigned)startingIndex;
-(BOOL)shouldLoad:(id)load;
-(id)updatedIndex:(id)index data:(id)data context:(id)context;
-(id)requestForContext:(id)context;
-(id)spawnContext:(id)context;
-(BOOL)loadDetails:(id)details;
-(BOOL)loadPhotos:(id)photos;
-(id)setupPhotoContext:(id)context;
@end
