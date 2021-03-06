/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:22 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BTAPIClient;

@interface BTCardClient : NSObject {

	BTAPIClient* _apiClient;

}

@property (nonatomic,retain) BTAPIClient * apiClient;              //@synthesize apiClient=_apiClient - In the implementation block
+(id)validationErrorUserInfo:(id)arg1 ;
+(void)load;
-(BTAPIClient *)apiClient;
-(void)setApiClient:(BTAPIClient *)arg1 ;
-(id)initWithAPIClient:(id)arg1 ;
-(void)tokenizeCard:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)tokenizeCard:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)sendUnionPayAnalyticsEvent:(BOOL)arg1 ;
-(void)sendAnalyticsEventWithSuccess:(BOOL)arg1 ;
-(id)init;
@end

