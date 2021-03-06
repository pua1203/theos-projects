/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "CLLocationManagerDelegate.h"
#import "TimerTargetDelegate.h"
#import "LoadingModel.h"

@class NSString, CLLocationManager, TimerTarget;
@protocol VKLookupSourceLocationDelegate;

__attribute__((visibility("hidden")))
@interface VKLookupSourceLocation : LoadingModel <CLLocationManagerDelegate, TimerTargetDelegate> {
	id<VKLookupSourceLocationDelegate> _locationSourceDelegate;
	CLLocationManager* _locationManager;
	TimerTarget* _updateTimer;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic, getter=isAuthorizationDetermined) BOOL authorizationDetermined;
@property(readonly, assign, nonatomic, getter=isAuthorized) BOOL authorized;
@property(assign, nonatomic) __weak id<VKLookupSourceLocationDelegate> locationSourceDelegate;
@property(retain, nonatomic) TimerTarget* updateTimer;
@property(retain, nonatomic) CLLocationManager* locationManager;
-(void).cxx_destruct;
-(void)handleAddFriend:(id)aFriend :(id)arg2;
-(void)registerForEvents:(id)events;
-(void)timerTargetFired:(id)fired;
-(id)updatedIndex:(id)index data:(id)data context:(id)context;
-(id)requestForContext:(id)context;
-(BOOL)shouldLoad:(id)load;
-(void)authorize;
-(void)stopUpdatingNearbyUsers;
-(void)stop;
-(void)startUpdatingNearbyUsers;
-(id)spawnContext:(id)context;
-(void)reset;
-(void)activate;
-(id)usersRequestWithLocation:(id)location;
-(BOOL)lastLocationManagerLocationIsActual;
-(void)locationManager:(id)manager didChangeAuthorizationStatus:(int)status;
-(void)locationManager:(id)manager didFailWithError:(id)error;
-(void)locationManager:(id)manager didUpdateLocations:(id)locations;
-(BOOL)isAuthorizedWithStatus:(int)status;
-(void)dealloc;
-(id)initWithSession:(id)session;
@end

