/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/FABNetworkOperation.h>

@protocol FABOnboardingOperationDelegate;
@class NSError, FABApplicationIdentiferModel, NSString, FABNetworkClient, NSDictionary;

@interface FABOnboardingOperation : FABNetworkOperation {

	BOOL _shouldCreate;
	NSError* _error;
	FABApplicationIdentiferModel* _appIdentifierModel;
	NSString* _appEndpoint;
	id<FABOnboardingOperationDelegate> _delegate;
	FABNetworkClient* _networkClient;
	NSDictionary* _kitVersionsByKitBundleIdentifier;

}

@property (assign,nonatomic) BOOL shouldCreate;                                                   //@synthesize shouldCreate=_shouldCreate - In the implementation block
@property (nonatomic,readonly) FABApplicationIdentiferModel * appIdentifierModel;                 //@synthesize appIdentifierModel=_appIdentifierModel - In the implementation block
@property (nonatomic,readonly) NSString * appEndpoint;                                            //@synthesize appEndpoint=_appEndpoint - In the implementation block
@property (nonatomic,readonly) id<FABOnboardingOperationDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,__weak,readonly) FABNetworkClient * networkClient;                           //@synthesize networkClient=_networkClient - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * kitVersionsByKitBundleIdentifier;              //@synthesize kitVersionsByKitBundleIdentifier=_kitVersionsByKitBundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSError * error;                                                   //@synthesize error=_error - In the implementation block
-(id)appBuildVersion;
-(id)appDisplayVersion;
-(FABNetworkClient *)networkClient;
-(id)initWithAPIKey:(id)arg1 ;
-(id)errorForCode:(unsigned long long)arg1 userInfo:(id)arg2 ;
-(void)beginAppConfigure;
-(FABApplicationIdentiferModel *)appIdentifierModel;
-(id)appInstallSource;
-(NSDictionary *)kitVersionsByKitBundleIdentifier;
-(BOOL)shouldCreate;
-(id)onboardingRequestForAppCreate:(BOOL)arg1 ;
-(NSString *)appEndpoint;
-(id)appPlatform;
-(id)appCreateURL;
-(id)appUpdateURL;
-(id)initWithDelegate:(id)arg1 shouldCreate:(BOOL)arg2 APIKey:(id)arg3 kitVersionsByKitBundleIdentifier:(id)arg4 appIdentifierModel:(id)arg5 endpointString:(id)arg6 networkClient:(id)arg7 ;
-(void)setShouldCreate:(BOOL)arg1 ;
-(id<FABOnboardingOperationDelegate>)delegate;
-(void)main;
-(id)appBundleIdentifier;
-(id)appName;
-(NSError *)error;
@end

