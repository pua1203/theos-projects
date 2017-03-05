/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSBundle, CLSMachOBinary, NSString, NSURL;

@interface CLSdSYM : XXUnknownSuperclass {
	CLSMachOBinary* _binary;
	NSBundle* _bundle;
}
@property(readonly, copy, nonatomic) NSString* shortBundleVersion;
@property(readonly, copy, nonatomic) NSString* bundleVersion;
@property(readonly, copy, nonatomic) NSString* executablePath;
@property(readonly, copy, nonatomic) NSURL* executableURL;
@property(readonly, copy, nonatomic) NSString* bundleIdentifier;
@property(readonly, assign, nonatomic) CLSMachOBinary* binary;
@property(readonly, assign, nonatomic) NSBundle* bundle;
+(id)dSYMWithURL:(id)url;
-(void).cxx_destruct;
-(void)enumerateUUIDs:(id)uuids;
-(id)initWithURL:(id)url;
@end
