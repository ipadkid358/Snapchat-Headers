/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:39 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCUnlockablesLocPreCacheDataParserProtocol.h>

@protocol SCUnlockableParserDelegate;
@class SCAGeofilterPrecacheRequest, NSString;

@interface SCUnlockablesLocPreCacheDataParser : NSObject <SCUnlockablesLocPreCacheDataParserProtocol> {

	SCAGeofilterPrecacheRequest* _geofilterPreCacheRequestEvent;
	id<SCUnlockableParserDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SCUnlockableParserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_parseFencedUnlockablesFromResponse:(id)arg1 ;
-(void)_parseCountryUnlockablesFromResponse:(id)arg1 ;
-(void)_parsePersonalUnlockablesFromResponse:(id)arg1 ;
-(void)_parseConfigurationFromResponse:(id)arg1 ;
-(void)_parseRegionsFromResponse:(id)arg1 ;
-(void)_parseStatusFromResponse:(id)arg1 ;
-(void)addGeofilterCountsToLoggingContext:(id)arg1 ;
-(void)_parseUnlockablesWithKey:(id)arg1 dictionary:(id)arg2 ;
-(id)initWithLoggingContext:(id)arg1 ;
-(void)parseResponse:(id)arg1 ;
-(void)setDelegate:(id<SCUnlockableParserDelegate>)arg1 ;
-(id<SCUnlockableParserDelegate>)delegate;
@end

