/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "VKClient-Structs.h"
#import "UIGestureRecognizerDelegate.h"

@class NSString, PHAsset, VKPPCropBorderView, UIImageView;
@protocol VKPPAssetPresenter;

@interface VKPPCropView : XXUnknownSuperclass <UIGestureRecognizerDelegate> {
	PHAsset* _asset;
	id<VKPPAssetPresenter> _weakPresenter;
	int _requestID;
	UIImageView* _frameView;
	UIImageView* _imageView;
	VKPPCropBorderView* _borderView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) int requestID;
@property(assign, nonatomic) id<VKPPAssetPresenter> weakPresenter;
@property(retain, nonatomic) PHAsset* asset;
@property(readonly, retain, nonatomic) VKPPCropBorderView* borderView;
@property(readonly, retain, nonatomic) UIImageView* imageView;
@property(readonly, retain, nonatomic) UIImageView* frameView;
-(void)animateWithImage:(id)image show:(BOOL)show block:(id)block;
-(void)animateCommonBlock:(id)block;
-(void)handlePresented:(BOOL)presented animated:(BOOL)animated completion:(id)completion;
-(void)loadImage:(id)image;
-(id)loadedFullImage;
-(CGAffineTransform)currentCrop;
-(void)gestureTap:(id)tap;
-(void)gesturePan:(id)pan;
-(void)gestureRotate:(id)rotate;
-(void)gestureScale:(id)scale;
-(BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;
-(void)alignAngle:(BOOL)angle;
-(void)validateBounds;
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end

