/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class VKDoc, NSURLSessionTask;
@protocol VKMGifLoaderDelegate;

__attribute__((visibility("hidden")))
@interface VKMGifLoader : XXUnknownSuperclass {
	BOOL _cached;
	VKDoc* _doc;
	NSURLSessionTask* _operation;
	id<VKMGifLoaderDelegate> _delegate;
}
@property(assign, nonatomic) __weak id<VKMGifLoaderDelegate> delegate;
@property(assign) BOOL cached;
@property(retain) NSURLSessionTask* operation;
@property(retain) VKDoc* doc;
-(void).cxx_destruct;
-(void)clear;
-(void)reuse;
-(void)cancel;
-(void)complete:(id)complete;
-(void)progress:(double)progress;
-(void)dealloc;
@end
