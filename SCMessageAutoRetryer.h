/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:34 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCNetworkConnectivityListener.h>

@protocol SCFeedDataSource;
@class SCUserSession, NSString;

@interface SCMessageAutoRetryer : NSObject <SCNetworkConnectivityListener> {

	id<SCFeedDataSource> _feedDataSource;
	SCUserSession* _userSession;
	/*^block*/id _retryAndScheduleNextBlock;
	long long _currentConnectStatus;
	BOOL _feedViewModelsDidLoadOnce;
	unsigned long long _retryCountInCurrentConnectionSession;
	unsigned long long _retryCountInCurrentAppSession;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)networkConnectivityStatusDidChange:(long long)arg1 ;
-(id)initWithFeedDataSource:(id)arg1 userSession:(id)arg2 ;
-(void)feedDataSourceDidReload;
-(void)_startRetryIfPossible:(long long)arg1 ;
-(void)_cancelRetry;
-(void)_retryAllFailedMessages:(long long)arg1 ;
@end

