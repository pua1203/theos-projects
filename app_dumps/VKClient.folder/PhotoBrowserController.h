/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NavWindowPresenterController.h"
#import "PhotoHostViewDelegate.h"
#import "LayoutAwareViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "VKClient-Structs.h"
#import "UIScrollViewDelegate.h"
#import "VKMController.h"

@class UIBarButtonItem, PhotoHostView, PhotoBrowsingModel, UITapGestureRecognizer, Component5HostView, UIButton, UILabel, UIScrollView, UIImageView, NavWindowPresenter, NSString, UIPanGestureRecognizer, UIToolbar, LayoutAwareView, NSArray;
@protocol VKImage;

__attribute__((visibility("hidden")))
@interface PhotoBrowserController : VKMController <UIGestureRecognizerDelegate, PhotoHostViewDelegate, UIScrollViewDelegate, LayoutAwareViewDelegate, NavWindowPresenterController> {
	BOOL dirty;
	BOOL skipScroll;
	unsigned currentPage;
	BOOL appearAnimated;
	BOOL appearFromThumbnail;
	id<VKImage> _single;
	NavWindowPresenter* _windowPresenter;
	NSArray* _photos;
	LayoutAwareView* _rootView;
	UIScrollView* _paging;
	NSArray* _hosts;
	PhotoHostView* _animatingHostView;
	UIToolbar* _toolbar;
	NSArray* _photoToolbarItems;
	NSArray* _gifToolbarItems;
	UIBarButtonItem* _actionBarButtonItem;
	UIButton* _buttonLike;
	UIButton* _buttonComment;
	UIButton* _buttonTag;
	UIButton* _buttonGifAdd;
	Component5HostView* _descr;
	UILabel* _titleLabel;
	UIImageView* _descrShadow;
	int _deviceOrientation;
	UITapGestureRecognizer* _doubleTapRecoginizer;
	UIPanGestureRecognizer* _panGesture;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NavWindowPresenter* windowPresenter;
@property(retain, nonatomic) id<VKImage> single;
@property(retain, nonatomic) PhotoBrowsingModel* model;
@property(retain, nonatomic) UIPanGestureRecognizer* panGesture;
@property(retain, nonatomic) UITapGestureRecognizer* doubleTapRecoginizer;
@property(assign, nonatomic) int deviceOrientation;
@property(retain, nonatomic) UIImageView* descrShadow;
@property(retain, nonatomic) UILabel* titleLabel;
@property(retain, nonatomic) Component5HostView* descr;
@property(retain, nonatomic) UIButton* buttonGifAdd;
@property(retain, nonatomic) UIButton* buttonTag;
@property(retain, nonatomic) UIButton* buttonComment;
@property(retain, nonatomic) UIButton* buttonLike;
@property(retain, nonatomic) UIBarButtonItem* actionBarButtonItem;
@property(retain, nonatomic) NSArray* gifToolbarItems;
@property(retain, nonatomic) NSArray* photoToolbarItems;
@property(retain, nonatomic) UIToolbar* toolbar;
@property(retain, nonatomic) PhotoHostView* animatingHostView;
@property(retain, nonatomic) NSArray* hosts;
@property(retain, nonatomic) UIScrollView* paging;
@property(retain, nonatomic) LayoutAwareView* rootView;
@property(retain, nonatomic) NSArray* photos;
-(void).cxx_destruct;
-(id)VKMControllerStatsRef;
-(void)photoHost:(id)host didPlayGif:(id)gif;
-(void)photoHostViewDidZoom:(id)photoHostView;
-(void)notificationWillResignActive:(id)notification;
-(void)gesturePan:(id)pan;
-(BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;
-(void)markAppearFromThumbnail;
-(void)markAppearAnimated;
-(void)windowPresenterAnimateOut:(id)anOut animateWindow:(BOOL)window complete:(id)complete;
-(void)windowPresenterAnimateIn:(id)anIn complete:(id)complete;
-(void)renderHostWindowTint:(int)tint zoom:(BOOL)zoom background:(BOOL)background;
-(void)animateWithPresenter:(id)presenter block:(id)block;
-(UIEdgeInsets)photoHostHudInsetsWhenToolbarVisible:(BOOL)visible;
-(void)chromeToggle;
-(void)chromeHide;
-(void)chrome:(BOOL)chrome animated:(BOOL)animated;
-(void)chromeHideDelay:(double)delay;
-(void)chromeClear;
-(BOOL)chromeHidden;
-(void)actionAction:(id)action;
-(void)actionGifShare:(id)share;
-(void)actionGifAdd:(id)add;
-(void)actionTag:(id)tag;
-(void)actionComment:(id)comment;
-(void)openPhoto;
-(void)actionLike:(id)like;
-(void)animateLike:(BOOL)like;
-(void)gestureDoubleTap:(id)tap;
-(void)gestureTap:(id)tap;
-(void)actionPresenterClose:(id)close;
-(void)layoutAwareViewDidLayout:(id)layoutAwareView;
-(BOOL)canUseMaxQuality;
-(void)scrollToPage;
-(void)tile;
-(void)layoutPages;
-(void)updateScrollFrame;
-(void)scrollViewWillBeginDragging:(id)scrollView;
-(void)scrollViewDidScroll:(id)scrollView;
-(void)model:(id)model updated:(id)updated;
-(void)updateDetail;
-(void)updateTitle;
-(void)switchedToPage:(unsigned)page;
-(id)photoForPage:(unsigned)page;
-(id)hostViewForPage:(unsigned)page;
-(id)modelPhotos;
-(BOOL)shouldAutorotate;
-(unsigned)supportedInterfaceOrientations;
-(id)VKMNavigationBarTintColor;
-(id)VKMNavigationBarBarTintColor;
-(BOOL)VKMNavigationBarTranslucent;
-(int)VKMNavigationBarStyle;
-(int)VKMControllerStatusBarStyle;
-(BOOL)route:(id)route;
-(void)updateToolbar:(BOOL)toolbar;
-(void)updateRightBarButtonItem:(BOOL)item;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)loadView;
-(BOOL)dark;
-(void)enablePresenter;
-(void)dealloc;
-(id)initWithMain:(id)main andModel:(id)model;
@end

