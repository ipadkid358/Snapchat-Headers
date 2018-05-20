/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:13 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Snapchat/Snapchat-Structs.h>
@class SCSnapchattersDataRequestListenerAnnouncer, NSMutableDictionary;

@interface SCSnapchattersDataRequestTracker : NSObject {

	mutex _actionProcessingDictLock;
	SCSnapchattersDataRequestListenerAnnouncer* _announcer;
	NSMutableDictionary* _actionProcessingDict;

}
-(void)startDataRequest:(long long)arg1 forSnapchatterId:(id)arg2 ;
-(void)endDataRequest:(long long)arg1 forSnapchatterId:(id)arg2 withSuccess:(BOOL)arg3 ;
-(void)_startProcessingDataRequest:(long long)arg1 forSnapchatterId:(id)arg2 ;
-(void)_announceSnapchattersDataRequestDidStart:(long long)arg1 ;
-(void)_endProcessingDataRequest:(long long)arg1 forSnapchatterId:(id)arg2 ;
-(void)_announceSnapchattersActionDidEnd:(long long)arg1 userId:(id)arg2 withSuccess:(BOOL)arg3 ;
-(id)inProcessingSnapchatterIds;
-(id)init;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
@end
