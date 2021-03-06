/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSNumber, NSArray, NSDictionary, NSString;

@interface MREvent : XXUnknownSuperclass {
	NSString* _type;
	NSString* _name;
	NSString* _value;
	NSDictionary* _params;
	NSArray* _timestamps;
	NSNumber* _timestampStart;
	NSNumber* _timestampsSkipped;
}
@property(retain, nonatomic) NSNumber* timestampsSkipped;
@property(retain, nonatomic) NSNumber* timestampStart;
@property(readonly, assign, nonatomic) NSNumber* timestamp;
@property(readonly, assign, nonatomic) NSArray* timestamps;
@property(retain, nonatomic) NSDictionary* params;
@property(copy, nonatomic) NSString* value;
@property(copy, nonatomic) NSString* name;
@property(readonly, copy, nonatomic) NSString* type;
-(void).cxx_destruct;
-(id)asJsonDictionary;
-(id)paramsAsJSONString;
-(void)setParamsFromJSONString:(id)jsonstring;
-(id)initWithType:(id)type timestamps:(id)timestamps;
-(id)initWithType:(id)type;
@end

