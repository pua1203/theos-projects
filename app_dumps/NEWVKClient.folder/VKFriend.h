/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKUser.h"


__attribute__((visibility("hidden")))
@interface VKFriend : VKUser {
	int _byear;
	int _bmonth;
	int _bday;
}
@property(assign, nonatomic) int bday;
@property(assign, nonatomic) int bmonth;
@property(assign, nonatomic) int byear;
+(void)load;
-(BOOL)process:(id)process context:(id)context;
@end

