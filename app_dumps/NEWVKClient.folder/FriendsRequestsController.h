/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKMLiveController.h"
#import "VKClient-Structs.h"

@class FriendsRequestsModel;

__attribute__((visibility("hidden")))
@interface FriendsRequestsController : VKMLiveController {
}
@property(retain, nonatomic) FriendsRequestsModel* model;
-(void)tableView:(id)view willDisplayHeaderView:(id)view2 forSection:(int)section;
-(id)tableView:(id)view viewForHeaderInSection:(int)section;
-(float)tableView:(id)view heightForFooterInSection:(int)section;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)actionDeleteAll:(id)all;
-(void)actionShowAll:(id)all;
-(id)VKMScrollViewBackgroundColor;
-(void)VKMTableUpdatedIndex;
-(Class)VKMTableViewClass;
-(int)VKMTableStyle;
-(void)viewDidLoad;
@end

