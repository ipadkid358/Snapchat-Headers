/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:28 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MediaDataSource <NSObject>
@optional
-(id)trackingIdForMedia:(id)arg1;
-(id)URLForMedia:(id)arg1;
-(id)endpointForMedia:(id)arg1;
-(id)endpointParamsForMedia:(id)arg1;
-(long long)requestPriorityUserInitiated:(BOOL)arg1;
-(long long)requestFallbackPriority;
-(id)trackingTypeForMedia:(id)arg1;
-(id)trackingMediaTypeForMedia:(id)arg1;
-(unsigned long long)trackingExpirationInDaysForMedia:(id)arg1;
-(BOOL)shouldUnzipMedia:(id)arg1;
-(BOOL)usingD2SForMedia:(id)arg1;

@required
-(BOOL)needsAuthToFetch;
-(id)mediaIdForMedia:(id)arg1;
-(id)decryptData:(id)arg1 forMedia:(id)arg2;
-(id)encryptionDictionaryForMedia:(id)arg1;
-(BOOL)persist;
-(BOOL)encrypt;
-(id)requestContexts;

@end

