/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:53 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCUserSession, SCRetriableRequestManager, SCSessionRequestManager, NSString;

@interface SCGtqNetworkController : NSObject {

	SCUserSession* _userSession;
	SCRetriableRequestManager* _retriableRequestManager;
	SCSessionRequestManager* _sessionRequestManager;
	NSString* _host;
	NSString* _serveUnlockablesPath;
	NSString* _viewAdTrackProxyEndpoint;
	NSString* _creationAdTrackProxyEndpoint;

}
-(id)initWithUserSession:(id)arg1 ;
-(void)_submitRequest:(id)arg1 performer:(id)arg2 shouldRetry:(BOOL)arg3 latencyMeasure:(long long)arg4 failureMeasure:(long long)arg5 success:(/*^block*/id)arg6 failure:(/*^block*/id)arg7 ;
-(void)fetchServeUnlockablesRequest:(id)arg1 performer:(id)arg2 referenceId:(id)arg3 success:(/*^block*/id)arg4 failure:(/*^block*/id)arg5 ;
-(void)fireGtqAdTrackProxyRequest:(id)arg1 performer:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(void)fireGtqCreationAdTrackProxyRequest:(id)arg1 performer:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
@end

