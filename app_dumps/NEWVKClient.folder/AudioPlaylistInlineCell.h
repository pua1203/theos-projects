/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKMCollectionCell.h"
#import "MultiImageLoaderDelegate.h"
#import "VKClient-Structs.h"

@class NSString, VKMImageView, UIColor, UILabel, VKMMultiImagePlaylistLoader;

__attribute__((visibility("hidden")))
@interface AudioPlaylistInlineCell : VKMCollectionCell <MultiImageLoaderDelegate> {
	VKMImageView* _image;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	VKMMultiImagePlaylistLoader* _multiloader;
	UIColor* _overlayColor;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, retain, nonatomic) UIColor* overlayColor;
@property(readonly, retain, nonatomic) VKMMultiImagePlaylistLoader* multiloader;
@property(readonly, retain, nonatomic) UILabel* subtitleLabel;
@property(readonly, retain, nonatomic) UILabel* titleLabel;
@property(readonly, retain, nonatomic) VKMImageView* image;
+(UIEdgeInsets)sectionInset;
+(float)interitemSpace;
+(CGSize)cellSize;
-(void).cxx_destruct;
-(void)forceExpandedPlaylistTitle:(id)title subtitle:(id)subtitle;
-(void)multiImageLoader:(id)loader complete:(id)complete;
-(void)setHighlighted:(BOOL)highlighted;
-(void)layoutSubviews;
-(void)loadPlaylistImage:(id)image expectedReuse:(double)reuse;
-(void)attach:(id)attach expectedReuse:(double)reuse;
-(void)prepareForReuse;
-(CGRect)imageFrame;
-(id)createSubviews;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
@end
