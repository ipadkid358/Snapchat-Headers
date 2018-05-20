/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:48 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCSessionRequestManager, SCUserSession;

@interface SCScannablesAPI : NSObject {

	SCSessionRequestManager* _requestManager;
	SCUserSession* _userSession;

}
-(void)fetchImageWithCompletion:(id)arg1 imageAndDataProxyCallback:(/*^block*/id)arg2 successQueue:(id)arg3 failureQueue:(id)arg4 ;
-(void)getActionFromScannableData:(id)arg1 version:(int)arg2 type:(long long)arg3 unlockProperties:(id)arg4 successBlock:(/*^block*/id)arg5 failureBlock:(/*^block*/id)arg6 ;
-(void)fetchProxyToken:(/*^block*/id)arg1 ;
-(void)getActionFromScannableData:(id)arg1 version:(int)arg2 type:(long long)arg3 unlockProperties:(id)arg4 recordScanHistory:(BOOL)arg5 successBlock:(/*^block*/id)arg6 failureBlock:(/*^block*/id)arg7 ;
-(void)_getActionWithRequest:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(id)initWithRequestManager:(id)arg1 userSession:(id)arg2 ;
-(void)fetchImageWithCompletion:(id)arg1 imageProxyCallback:(/*^block*/id)arg2 ;
-(void)getActionFromSongInfo:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)requestGhostImage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isReachable;
@end
