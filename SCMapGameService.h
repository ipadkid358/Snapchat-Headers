/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:41 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCSessionRequestManager, SCSnapTokenManager;

@interface SCMapGameService : NSObject {

	SCSessionRequestManager* _sessionRequestManager;
	SCSnapTokenManager* _snapTokenManager;
	BOOL _isEmployee;

}
-(void)rpcEndpoint:(id)arg1 message:(id)arg2 responseClass:(Class)arg3 callbackQueue:(id)arg4 callback:(/*^block*/id)arg5 ;
-(id)initWithSessionRequestManager:(id)arg1 snapTokenManager:(id)arg2 isCurrentUserEmployee:(BOOL)arg3 ;
-(void)fetchCurrentGameStateOnQueue:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)acquireGameMarker:(id)arg1 callbackQueue:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)fetchAcquiredGameMarkersOnQueue:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)clearGameState;
-(void)deleteGameMarker:(id)arg1 reason:(id)arg2 callbackQueue:(id)arg3 callback:(/*^block*/id)arg4 ;
@end
