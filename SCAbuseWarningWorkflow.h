/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:13 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCAbuseReportUserInteractionDelegate.h>

@protocol SCAbuseWarningRepository, SCAbuseWarningWorkflowDelegate;
@class SCAbuseWarningService, NSString;

@interface SCAbuseWarningWorkflow : NSObject <SCAbuseReportUserInteractionDelegate> {

	id<SCAbuseWarningRepository> _abuseWarningRepository;
	SCAbuseWarningService* _abuseWarningService;
	id<SCAbuseWarningWorkflowDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)userAcknowledgedAbuseReport;
-(id)initWithAbuseWarningRepository:(id)arg1 abuseWarningService:(id)arg2 delegate:(id)arg3 ;
@end
