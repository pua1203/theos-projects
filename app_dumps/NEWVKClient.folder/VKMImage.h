/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import "NSCacheDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSOperationQueue, NSString, NSCache, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VKMImage : XXUnknownSuperclass <NSCacheDelegate> {
	NSObject<OS_dispatch_queue>* processingQueue;
	NSCache* _memory;
	NSOperationQueue* _queue;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, retain, nonatomic) NSCache* memory;
@property(readonly, retain, nonatomic) NSOperationQueue* queue;
+(id)operationForImage:(id)image cacheResponse:(BOOL)response forceScale:(id)scale;
+(id)shared;
-(void).cxx_destruct;
-(void)imageWithURL:(id)url complete:(id)complete;
-(void)multiPlaylistImage:(id)image size:(float)size cornerRadius:(float)radius overlayColor:(id)color handler:(id)handler;
-(void)multidialogImage:(id)image handler:(id)handler;
-(void)load:(id)load filter:(id)filter reuse:(double)reuse;
-(void)load:(id)load type:(XXStruct_UOIMaD)type reuse:(double)reuse;
-(void)loadLocalImageWithPath:(id)path async:(BOOL)async completion:(id)completion;
-(id)localImageWithPath:(id)path;
-(void)notificationMemory:(id)memory;
-(void)dealloc;
-(id)initWithMemoryCountLimit:(unsigned)memoryCountLimit maxOperations:(int)operations;
@end
