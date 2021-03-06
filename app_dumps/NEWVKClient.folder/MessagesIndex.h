/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Index.h"

@class NSDictionary, MessagesListRenderer;

__attribute__((visibility("hidden")))
@interface MessagesIndex : Index {
	NSDictionary* _justSent;
	MessagesListRenderer* _renderer;
}
@property(retain, nonatomic) NSDictionary* justSent;
@property(retain, nonatomic) MessagesListRenderer* renderer;
+(id)indexWithRenderer:(id)renderer initial:(BOOL)initial;
-(void).cxx_destruct;
-(id)indexByReseting;
-(id)sectionAtIndex:(int)index;
-(id)indexWithUpdate:(id*)update updating:(id)updating removing:(id)removing addingDESC:(id)desc allowAppend:(BOOL)append pending:(BOOL)pending;
@end

