/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCopying.h"
#import "VK_Music-Structs.h"


@interface BKControlWrapper : XXUnknownSuperclass <NSCopying> {
	unsigned _controlEvents;
	id _handler;
}
@property(copy, nonatomic) id handler;
@property(assign, nonatomic) unsigned controlEvents;
-(void).cxx_destruct;
-(void)invoke:(id)invoke;
-(id)copyWithZone:(NSZone*)zone;
-(id)initWithHandler:(id)handler forControlEvents:(unsigned)controlEvents;
@end
