/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BaseMarketCollectionsAdapter.h"
#import "VKClient-Structs.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface CollectionsModeMarketCollectionsAdapter : BaseMarketCollectionsAdapter {
	NSArray* _segments;
}
@property(readonly, copy, nonatomic) NSArray* segments;
-(void).cxx_destruct;
-(void)configureCell:(id)cell withDomainItem:(id)domainItem;
-(id)itemAtIndexPath:(id)indexPath;
-(id)collectionsSectionHeaderForSection:(unsigned)section;
-(CGSize)sizeForItemAtIndexPath:(id)indexPath;
-(id)viewForSupplementaryElementOfKind:(id)kind atIndexPath:(id)indexPath;
-(CGSize)referenceSizeForFooterInSection:(int)section;
-(CGSize)referenceSizeForHeaderInSection:(int)section;
-(id)initWithController:(id)controller segments:(id)segments;
@end
