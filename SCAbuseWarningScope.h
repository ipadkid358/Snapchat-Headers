/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:13 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCAbuseWarningWorkflowDelegate;
@class SCUserSession, NSString;

@interface SCAbuseWarningScope : NSObject {

	SCUserSession* _userSession;
	NSString* _abuseWarningId;
	NSString* _abuseWarningMessage;
	id<SCAbuseWarningWorkflowDelegate> _abuseWarningWorkflowDelegate;

}

@property (nonatomic,readonly) SCUserSession * userSession;                                                         //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,readonly) NSString * abuseWarningId;                                                           //@synthesize abuseWarningId=_abuseWarningId - In the implementation block
@property (nonatomic,readonly) NSString * abuseWarningMessage;                                                      //@synthesize abuseWarningMessage=_abuseWarningMessage - In the implementation block
@property (nonatomic,__weak,readonly) id<SCAbuseWarningWorkflowDelegate> abuseWarningWorkflowDelegate;              //@synthesize abuseWarningWorkflowDelegate=_abuseWarningWorkflowDelegate - In the implementation block
+(id)scopeWithUserSession:(id)arg1 abuseWarningId:(id)arg2 abuseWarningMessage:(id)arg3 delegate:(id)arg4 ;
-(id)initWithUserSession:(id)arg1 abuseWarningId:(id)arg2 abuseWarningMessage:(id)arg3 delegate:(id)arg4 ;
-(NSString *)abuseWarningId;
-(NSString *)abuseWarningMessage;
-(id<SCAbuseWarningWorkflowDelegate>)abuseWarningWorkflowDelegate;
-(SCUserSession *)userSession;
@end

