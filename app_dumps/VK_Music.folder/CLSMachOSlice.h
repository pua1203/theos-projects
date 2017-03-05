/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "VK_Music-Structs.h"

@class NSString, NSArray;

@interface CLSMachOSlice : XXUnknownSuperclass {
	CLSMachOSlice _slice;
	NSString* _uuidString;
	NSArray* _linkedDylibs;
	PLCrashHostInfoVersion _minimumOSVersion;
	PLCrashHostInfoVersion _linkedSDKVersion;
}
@property(readonly, assign, nonatomic) PLCrashHostInfoVersion linkedSDKVersion;
@property(readonly, assign, nonatomic) PLCrashHostInfoVersion minimumOSVersion;
@property(readonly, assign, nonatomic) NSArray* linkedDylibs;
@property(readonly, copy, nonatomic) NSString* architectureName;
@property(readonly, copy, nonatomic) NSString* uuid;
+(id)runningSlice;
-(void).cxx_destruct;
-(id)initWithSlice:(CLSMachOSlice*)slice;
@end
