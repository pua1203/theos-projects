/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import "TrackingBoundsView.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UIScrollViewDelegate.h"
#import "AutoplayedVideoViewDelegate.h"

@class AFImageRequestOperation, AutoplayedGifView, UIScrollView, VKImageVariant, UIImageView, NSString, UIActivityIndicatorView, PhotoHostProgressView;
@protocol PhotoHostViewDelegate, VKBrowsableImage;

__attribute__((visibility("hidden")))
@interface PhotoHostView : XXUnknownSuperclass <AutoplayedVideoViewDelegate, UIScrollViewDelegate, TrackingBoundsView> {
	BOOL dirty;
	BOOL loadedInitial;
	BOOL shouldUpdateVariant;
	BOOL zoomWillBeginDisabled;
	id<PhotoHostViewDelegate> _delegate;
	UIScrollView* _scrollView;
	UIImageView* _image;
	AutoplayedGifView* _gifView;
	UIActivityIndicatorView* _animation;
	float _maxRatio;
	VKImageVariant* _currentVariant;
	float _trackingBoundsPercentsVisible;
	id<VKBrowsableImage> _renderedImage;
	VKImageVariant* _initialVariant;
	VKImageVariant* _maxVariant;
	PhotoHostProgressView* _progressView;
	AFImageRequestOperation* _imageOperation;
	UIEdgeInsets _progressViewInset;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) UIEdgeInsets progressViewInset;
@property(assign, nonatomic) float trackingBoundsPercentsVisible;
@property(assign, nonatomic) float maxRatio;
@property(retain, nonatomic) UIActivityIndicatorView* animation;
@property(retain, nonatomic) AutoplayedGifView* gifView;
@property(retain, nonatomic) UIImageView* image;
@property(retain, nonatomic) UIScrollView* scrollView;
@property(assign, nonatomic) __weak id<PhotoHostViewDelegate> delegate;
@property(retain, nonatomic) AFImageRequestOperation* imageOperation;
@property(retain, nonatomic) PhotoHostProgressView* progressView;
@property(retain, nonatomic) VKImageVariant* maxVariant;
@property(retain, nonatomic) VKImageVariant* currentVariant;
@property(retain, nonatomic) VKImageVariant* initialVariant;
@property(retain, nonatomic) id<VKBrowsableImage> renderedImage;
-(void).cxx_destruct;
-(id)navDelegate;
-(void)videoViewBecameHidden:(id)hidden;
-(BOOL)videoViewToggleFullscreen:(id)fullscreen;
-(void)videoViewDidStartPlaying:(id)videoView;
-(void)videoViewDidFinishLoading:(id)videoView;
-(id)viewForZoomingInScrollView:(id)scrollView;
-(void)scrollViewWillBeginZooming:(id)scrollView withView:(id)view;
-(void)scrollViewDidZoom:(id)scrollView;
-(void)markAsPresenting;
-(void)viewTrackingBoundsDidChange:(float)viewTrackingBounds previousValue:(float)value;
-(void)render:(id)render finalImage:(BOOL)image;
-(void)completeImage:(id)image;
-(void)refreshVariant:(BOOL)variant;
-(void)load:(id)load delay:(float)delay maxQuality:(BOOL)quality;
-(void)loadVariant:(id)variant delay:(float)delay;
-(void)loadVariant:(id)variant;
-(void)loadImage;
-(void)reuse;
-(void)zoomTo:(CGPoint)to;
-(void)layoutProgressView;
-(void)layout;
-(void)alignScrollView;
-(void)prepareGifView;
-(void)usePlaceholderImageIfNeeded:(id)needed sizeType:(int)type;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
@end
