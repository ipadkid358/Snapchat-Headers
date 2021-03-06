/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:18 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, SCImpalaService;

@interface SCImpalaBusinessProfileHandlers : NSObject {

	NSMutableDictionary* _handlerById;
	SCImpalaService* _impalaService;

}
-(id)_handlerWithId:(id)arg1 createIfNeeded:(BOOL)arg2 ;
-(void)_scheduleCleanUp;
-(id)_updateHandlersWithBusinessProfiles:(id)arg1 ;
-(void)updateHandlersForBusinessProfiles:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_handlersWithBusinessProfileIds:(id)arg1 createIfNeeded:(BOOL)arg2 ;
-(void)handlersForBusinessProfileIds:(id)arg1 createIfNeeded:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithImpalaService:(id)arg1 ;
-(void)updateHandlerForBusinessProfile:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handlerForBusinessProfileId:(id)arg1 createIfNeeded:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_cleanUp;
@end

