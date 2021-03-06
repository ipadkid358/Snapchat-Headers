/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:10 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface SCSnapAdsEventBus : NSObject {

	NSMutableDictionary* _eventListeners;
	NSMutableDictionary* _eventInterceptors;

}

@property (nonatomic,retain) NSMutableDictionary * eventListeners;                 //@synthesize eventListeners=_eventListeners - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * eventInterceptors;              //@synthesize eventInterceptors=_eventInterceptors - In the implementation block
+(id)shared;
-(void)onEvent:(id)arg1 ;
-(void)addListenerForEvent:(Class)arg1 listenerBlock:(/*^block*/id)arg2 ;
-(void)removeListenerForEvent:(Class)arg1 listenerBlock:(/*^block*/id)arg2 ;
-(void)removeInterceptorForEvent:(Class)arg1 interceptorBlock:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)eventListeners;
-(void)setEventListeners:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)eventInterceptors;
-(void)setEventInterceptors:(NSMutableDictionary *)arg1 ;
-(void)addInterceptorForEvent:(Class)arg1 interceptorBlock:(/*^block*/id)arg2 ;
-(id)init;
@end

