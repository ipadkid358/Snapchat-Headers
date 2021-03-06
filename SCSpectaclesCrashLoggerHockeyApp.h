/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:18 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCSpectaclesCrashLogger.h>

@class SCRequestManager, NSString;

@interface SCSpectaclesCrashLoggerHockeyApp : NSObject <SCSpectaclesCrashLogger> {

	SCRequestManager* _requestManager;
	NSString* _username;
	NSString* _email;

}

@property (nonatomic,retain) SCRequestManager * requestManager;              //@synthesize requestManager=_requestManager - In the implementation block
@property (nonatomic,copy) NSString * username;                              //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * email;                                 //@synthesize email=_email - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)sendCrashWithCrashInfo:(id)arg1 ;
-(id)zipFiles:(id)arg1 ;
-(void)sendCrashWithPackage:(id)arg1 version:(id)arg2 OSVersion:(id)arg3 model:(id)arg4 crashDate:(id)arg5 deviceId:(id)arg6 crashReasons:(id)arg7 crashStacks:(id)arg8 description:(id)arg9 attachmentFilePaths:(id)arg10 userId:(id)arg11 contact:(id)arg12 ;
-(id)assembleCrashInformationWithPackage:(id)arg1 version:(id)arg2 OSVersion:(id)arg3 model:(id)arg4 crashDate:(id)arg5 deviceId:(id)arg6 crashReasons:(id)arg7 crashStacks:(id)arg8 ;
-(BOOL)saveCrashInfoToFile:(id)arg1 filePath:(id)arg2 ;
-(void)uploadCrashInformation:(id)arg1 descriptionFilePath:(id)arg2 attachmentFilePaths:(id)arg3 userId:(id)arg4 contact:(id)arg5 ;
-(void)deleteCrashFile:(id)arg1 ;
-(id)appendRequestBody:(id)arg1 filePath:(id)arg2 fileParam:(id)arg3 boundaryConstant:(id)arg4 ;
-(id)initWithRequestManager:(id)arg1 username:(id)arg2 email:(id)arg3 ;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
-(NSString *)email;
-(void)setEmail:(NSString *)arg1 ;
-(SCRequestManager *)requestManager;
-(void)setRequestManager:(SCRequestManager *)arg1 ;
@end

