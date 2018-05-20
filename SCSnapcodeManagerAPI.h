/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:51 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCUserSessionScoped.h>

@class SCUserSession, SCSentinel, NSString;

@interface SCSnapcodeManagerAPI : NSObject <SCUserSessionScoped> {

	SCUserSession* _userSession;
	SCSentinel* _userSessionSentinel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithUserSession:(id)arg1 ;
-(void)approveLoginForClientId:(id)arg1 endpoint:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)submitSnapcodePackageRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)clearScanHistoryWithId:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)clearAllScanHistoryWithSuccessBlock:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2 ;
-(void)fetchScanHistoryWithStartDate:(long long)arg1 pageCount:(int)arg2 successBlock:(/*^block*/id)arg3 failureBlock:(/*^block*/id)arg4 ;
-(void)fetchScanAnalyticsForScannableId:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 successBlock:(/*^block*/id)arg4 failureBlock:(/*^block*/id)arg5 ;
-(void)fetchScanAnalyticsForScannableId:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)_sendFailureNotification:(id)arg1 ;
-(void)_parseScanHistoryResponse:(id)arg1 request:(id)arg2 data:(id)arg3 error:(id)arg4 successBlock:(/*^block*/id)arg5 failureBlock:(/*^block*/id)arg6 ;
-(void)addScanHistoryWithScannableId:(id)arg1 scanData:(id)arg2 snapshotJsonResponse:(id)arg3 successBlock:(/*^block*/id)arg4 failureBlock:(/*^block*/id)arg5 ;
-(void)invalidate;
-(BOOL)_isInvalidated;
@end
