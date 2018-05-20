/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:20 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCOperaPlaylistItemExtraPropertiesProvider;
@class NSArray, NSDictionary;

@interface SCOperaPlaylistPluginsManager : NSObject {

	NSArray* _featurePlugins;
	NSArray* _eventTrackerPlugins;
	NSDictionary* _mediaTypeConfigurations;
	NSArray*<SCOperaPlaylistItemExtraPropertiesProvider> _extraPropertiesProviders;

}

@property (nonatomic,copy,readonly) NSDictionary * mediaTypeConfigurations;                                                     //@synthesize mediaTypeConfigurations=_mediaTypeConfigurations - In the implementation block
@property (nonatomic,copy,readonly) NSArray*<SCOperaPlaylistItemExtraPropertiesProvider> extraPropertiesProviders;              //@synthesize extraPropertiesProviders=_extraPropertiesProviders - In the implementation block
-(void)addEventListenersWithEventAnnouncer:(id)arg1 ;
-(NSDictionary *)mediaTypeConfigurations;
-(void)setPlaylistItemController:(id)arg1 ;
-(void)updateOperaConfiguration:(id)arg1 ;
-(void)setOperaViewController:(id)arg1 ;
-(void)_setUpPlugins:(id)arg1 ;
-(void)_setUpMediaTypeConfigurations;
-(void)_setUpExtraPropertiesProviders;
-(id)initWithPlaylistPlugins:(id)arg1 ;
-(NSArray*<SCOperaPlaylistItemExtraPropertiesProvider>)extraPropertiesProviders;
-(void)teardown;
@end
