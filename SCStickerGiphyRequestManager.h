/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:51 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GiphyRequestToken;
@class NSString, SCUserSession;

@interface SCStickerGiphyRequestManager : NSObject {

	BOOL _shouldUseProxy;
	NSString* _giphyAPIKey;
	SCUserSession* _userSession;
	id<GiphyRequestToken> _lastRequestToken;

}

@property (nonatomic,copy) NSString * giphyAPIKey;                                  //@synthesize giphyAPIKey=_giphyAPIKey - In the implementation block
@property (nonatomic,readonly) SCUserSession * userSession;                         //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,readonly) BOOL shouldUseProxy;                                 //@synthesize shouldUseProxy=_shouldUseProxy - In the implementation block
@property (nonatomic,readonly) id<GiphyRequestToken> lastRequestToken;              //@synthesize lastRequestToken=_lastRequestToken - In the implementation block
-(void)cancelLastRequest;
-(id)initWithAPIKey:(id)arg1 userSession:(id)arg2 ;
-(id)getGiphyStickersWithLimit:(long long)arg1 parameters:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSString *)giphyAPIKey;
-(void)_processResponseData:(id)arg1 requestParameters:(id)arg2 error:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)shouldUseProxy;
-(id)proxyEndpoint;
-(id)giphyAPI;
-(id<GiphyRequestToken>)lastRequestToken;
-(id)getGiphyStickersWithParameters:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setGiphyAPIKey:(NSString *)arg1 ;
-(SCUserSession *)userSession;
-(void)cancelRequestWithToken:(id)arg1 ;
@end

