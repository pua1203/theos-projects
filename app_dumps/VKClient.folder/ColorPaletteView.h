/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDataSource.h"

@class NSIndexPath, NSString, UICollectionView, NSArray;
@protocol ColorPaletteViewDelegate;

__attribute__((visibility("hidden")))
@interface ColorPaletteView : XXUnknownSuperclass <UICollectionViewDataSource, UICollectionViewDelegate> {
	BOOL _outlineWhiteColor;
	id<ColorPaletteViewDelegate> _delegate;
	NSArray* _colors;
	UICollectionView* _collectionView;
	NSIndexPath* _selectedIndexPath;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL outlineWhiteColor;
@property(assign, nonatomic) int selectedIndex;
@property(copy, nonatomic) NSArray* colors;
@property(assign, nonatomic) __weak id<ColorPaletteViewDelegate> delegate;
@property(retain, nonatomic) NSIndexPath* selectedIndexPath;
@property(retain, nonatomic) UICollectionView* collectionView;
-(void).cxx_destruct;
-(BOOL)collectionView:(id)view shouldSelectItemAtIndexPath:(id)indexPath;
-(int)collectionView:(id)view numberOfItemsInSection:(int)section;
-(id)collectionView:(id)view cellForItemAtIndexPath:(id)indexPath;
-(void)setSelectedIndexPath:(id)path animated:(BOOL)animated;
-(id)initWithFrame:(CGRect)frame colors:(id)colors;
-(id)initWithFrame:(CGRect)frame;
@end

