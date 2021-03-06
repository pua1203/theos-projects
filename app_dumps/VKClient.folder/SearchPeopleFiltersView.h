/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel, UIView;
@protocol SearchPeopleFiltersViewDelegate;

__attribute__((visibility("hidden")))
@interface SearchPeopleFiltersView : XXUnknownSuperclass {
	id<SearchPeopleFiltersViewDelegate> _delegate;
	UIView* _parametersDisplayContainer;
	UILabel* _filtersDescriptionLabel;
	UIView* _parametersButtonContainer;
}
@property(assign, nonatomic) __weak id<SearchPeopleFiltersViewDelegate> delegate;
@property(retain, nonatomic) UIView* parametersButtonContainer;
@property(retain, nonatomic) UILabel* filtersDescriptionLabel;
@property(retain, nonatomic) UIView* parametersDisplayContainer;
+(float)heightWithDescription:(id)description width:(float)width;
-(void).cxx_destruct;
-(void)didClearFilter:(id)filter;
-(void)setFilterDescription:(id)description;
-(void)setShowingDescription:(BOOL)description animated:(BOOL)animated;
-(BOOL)isShowingDescription;
-(void)makeParametersDisplay;
-(void)makeParametersButtonContainer;
-(id)initWithFrame:(CGRect)frame;
@end

