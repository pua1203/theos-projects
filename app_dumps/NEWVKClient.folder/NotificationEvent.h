/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSAttributedString;

__attribute__((visibility("hidden")))
@interface NotificationEvent : XXUnknownSuperclass {
	BOOL _sound;
	BOOL _vibration;
	BOOL _alert;
	NSString* _imageURL;
	NSString* _image;
	NSAttributedString* _atext;
	NSString* _alertStyleStatsKey;
}
@property(retain, nonatomic) NSString* alertStyleStatsKey;
@property(assign, nonatomic) BOOL alert;
@property(assign, nonatomic) BOOL vibration;
@property(assign, nonatomic) BOOL sound;
@property(copy, nonatomic) NSAttributedString* atext;
@property(copy, nonatomic) NSString* image;
@property(copy, nonatomic) NSString* imageURL;
-(void).cxx_destruct;
-(id)controlerForEvent:(id)event;
@end

