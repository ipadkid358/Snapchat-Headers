/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:01 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/GPBMessage.h>

@interface SCRSnapClusterSpamFeatures : GPBMessage

@property (assign,nonatomic) float offensiveScore; 
@property (assign,nonatomic) float offensiveCaptionScore; 
@property (assign,nonatomic) float offensiveTopCaptionScore; 
@property (assign,nonatomic) float nsfwScore; 
@property (assign,nonatomic) int numSnapsWithUserReport; 
@property (assign,nonatomic) long long maxUserReportsInSnap; 
@property (assign,nonatomic) float userReportScore; 
@property (assign,nonatomic) long long userReportNumOverall; 
@property (assign,nonatomic) long long userReportNumSexual; 
@property (assign,nonatomic) long long userReportNumViolent; 
@property (assign,nonatomic) long long userReportNumHarassment; 
@property (assign,nonatomic) BOOL hasOffensiveTerms; 
+(id)descriptor;
@end

