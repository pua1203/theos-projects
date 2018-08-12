/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "VKClient-Structs.h"
#import "NSObject.h"
#import "VKImageFilterContext.h"

@class UIImage, NSString;

@protocol VKImageFilterContext <NSObject>
-(CGSize)resultSize;
-(id)image;
@end

__attribute__((visibility("hidden")))
@interface VKImageFilterContext : XXUnknownSuperclass <VKImageFilterContext> {
	UIImage* _image;
	CGSize _resultSize;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) CGSize resultSize;
@property(retain, nonatomic) UIImage* image;
-(void).cxx_destruct;
@end
