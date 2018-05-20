/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:33 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCBaseShakeReportViewController.h>

@class NSString, SCShakeConfiguration;

@interface SCInternalShakeReportViewController : SCBaseShakeReportViewController {

	NSString* _projectName;
	NSString* _jiraMetaInfo;
	SCShakeConfiguration* _configuration;

}

@property (nonatomic,copy) NSString * projectName;                              //@synthesize projectName=_projectName - In the implementation block
@property (nonatomic,copy) NSString * jiraMetaInfo;                             //@synthesize jiraMetaInfo=_jiraMetaInfo - In the implementation block
@property (nonatomic,retain) SCShakeConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
-(NSString *)jiraMetaInfo;
-(void)setJiraMetaInfo:(NSString *)arg1 ;
-(NSString *)projectName;
-(void)setProjectName:(NSString *)arg1 ;
-(void)setConfiguration:(SCShakeConfiguration *)arg1 ;
-(SCShakeConfiguration *)configuration;
@end
