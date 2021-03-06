/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface CallingCodeInfo : XXUnknownSuperclass {
	NSSet* _countries;
	NSString* _callingCode;
	NSMutableArray* _trunkPrefixes;
	NSMutableArray* _intlPrefixes;
	NSMutableArray* _ruleSets;
	NSMutableArray* _formatStrings;
}
@property(retain, nonatomic) NSMutableArray* formatStrings;
@property(retain, nonatomic) NSMutableArray* ruleSets;
@property(retain, nonatomic) NSMutableArray* intlPrefixes;
@property(retain, nonatomic) NSMutableArray* trunkPrefixes;
@property(retain, nonatomic) NSString* callingCode;
@property(retain, nonatomic) NSSet* countries;
-(void).cxx_destruct;
-(id)description;
-(BOOL)isValidPhoneNumber:(id)number;
-(id)format:(id)format;
-(id)matchingTrunkCode:(id)code;
-(id)matchingAccessCode:(id)code;
@end

