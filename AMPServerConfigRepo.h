/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:17 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCServerConfigListener.h>

@protocol AMPConfigProtocol;
@class SCServerConfig, SCLogger, NSString, SOJUBlizzardClientConfig;

@interface AMPServerConfigRepo : NSObject <SCServerConfigListener> {

	SCServerConfig* _serverConfig;
	SCLogger* _scLogger;
	NSString* _clientConfigJsonString;
	id<AMPConfigProtocol> _clientConfig;
	id<AMPConfigProtocol> _staticConfig;
	SOJUBlizzardClientConfig* _sojuConfig;

}

@property (nonatomic,retain) SCLogger * scLogger;                                //@synthesize scLogger=_scLogger - In the implementation block
@property (nonatomic,retain) NSString * clientConfigJsonString;                  //@synthesize clientConfigJsonString=_clientConfigJsonString - In the implementation block
@property (nonatomic,retain) id<AMPConfigProtocol> clientConfig;                 //@synthesize clientConfig=_clientConfig - In the implementation block
@property (nonatomic,retain) id<AMPConfigProtocol> staticConfig;                 //@synthesize staticConfig=_staticConfig - In the implementation block
@property (nonatomic,retain) SOJUBlizzardClientConfig * sojuConfig;              //@synthesize sojuConfig=_sojuConfig - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)serverConfigDidChange:(id)arg1 ;
-(void)updateClientConfig:(id)arg1 ;
-(id)_getValidConfig:(id)arg1 fallbackConfig:(id)arg2 ;
-(NSString *)clientConfigJsonString;
-(void)setClientConfigJsonString:(NSString *)arg1 ;
-(void)setSojuConfig:(SOJUBlizzardClientConfig *)arg1 ;
-(SOJUBlizzardClientConfig *)sojuConfig;
-(void)_updateConfigAndLogConfigChangeEvent:(id)arg1 ;
-(void)_logConfigChangeEvent:(id)arg1 newVersion:(id)arg2 ;
-(id)initWithServerConfig:(id)arg1 scLogger:(id)arg2 ;
-(id)getClientConfig;
-(void)setStaticConfig:(id<AMPConfigProtocol>)arg1 ;
-(SCLogger *)scLogger;
-(void)setScLogger:(SCLogger *)arg1 ;
-(id<AMPConfigProtocol>)clientConfig;
-(void)setClientConfig:(id<AMPConfigProtocol>)arg1 ;
-(id<AMPConfigProtocol>)staticConfig;
@end

