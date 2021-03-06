/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:33 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCOperaPlaylistFetcher.h>

@protocol SCOperaPlaylistFetcherDelegate;
@class NSString, NSNumber, NSDictionary, SCDeepLinkURL, NSSet, SCDiscoverEdition, SCUserSession, SCDiscoverChannel;

@interface SCDiscoverDeeplinkHandler : NSObject <SCOperaPlaylistFetcher> {

	NSString* _publisherName;
	NSString* _editionId;
	NSString* _dSnapId;
	NSNumber* _linkableState;
	NSDictionary* _chunkDictionary;
	BOOL _isAd;
	long long _publisherId;
	unsigned long long _subscribeState;
	SCDeepLinkURL* _deepLinkURL;
	unsigned long long _deeplinkType;
	unsigned long long _loadingState;
	NSSet* _selectedDSnapIds;
	SCDiscoverEdition* _resolvedEdition;
	SCUserSession* _userSession;
	BOOL _shouldStartWithLongform;
	NSString* _deepLinkId;
	unsigned long long _context;
	SCDiscoverChannel* _channel;
	id<SCOperaPlaylistFetcherDelegate> _delegate;

}

@property (nonatomic,readonly) BOOL shouldStartWithLongform;                                  //@synthesize shouldStartWithLongform=_shouldStartWithLongform - In the implementation block
@property (nonatomic,readonly) NSString * deepLinkId;                                         //@synthesize deepLinkId=_deepLinkId - In the implementation block
@property (nonatomic,readonly) unsigned long long context;                                    //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) SCDiscoverChannel * channel;                                   //@synthesize channel=_channel - In the implementation block
@property (assign,nonatomic,__weak) id<SCOperaPlaylistFetcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)deepLinkId;
-(id)resolvedDataModels;
-(void)fetchPlaylist;
-(id)currentLoadingProperties;
-(id)initWithDeeplinkURL:(id)arg1 additionalInfo:(id)arg2 context:(unsigned long long)arg3 selectedDSnapIds:(id)arg4 userSession:(id)arg5 ;
-(BOOL)shouldStartWithLongform;
-(id)_discoverChannelsModel;
-(id)_discoverChannels;
-(void)_updateDeepLinkType;
-(void)_prepareDeeplinkDataModelBasedOnDeeplinkType;
-(void)_prepareHttpDeeplinkDataModel;
-(void)_prepareDSnapDeeplinkDataModel;
-(void)_prepareEditionDeeplinkDataModel;
-(void)_prepareChannelDeeplinkDataModel;
-(void)_prepareResolvedDeeplinkDataModel;
-(void)_prepareLinkedEdition;
-(void)_validateHttpDeeplink;
-(void)_validateDSnapDeeplink;
-(void)_validateEditionDeeplink;
-(void)_didSucceedValidatingDeeplink;
-(void)_wasDeniedDeepLinkingWithPublisherId:(id)arg1 availability:(unsigned long long)arg2 ;
-(void)_deeplinkValidationDidFail;
-(id)_editionFromEdition:(id)arg1 withDSnapIds:(id)arg2 ;
-(void)setDelegate:(id<SCOperaPlaylistFetcherDelegate>)arg1 ;
-(id<SCOperaPlaylistFetcherDelegate>)delegate;
-(unsigned long long)context;
-(SCDiscoverChannel *)channel;
-(unsigned long long)loadingState;
-(void)setLoadingState:(unsigned long long)arg1 ;
@end

