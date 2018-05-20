/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:28 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol SCBaseChatMediaProtocol <NSObject>
@property (nonatomic,copy) NSString * mediaId; 
@property (nonatomic,copy) NSString * key; 
@property (nonatomic,copy) NSString * iv; 
@property (assign,nonatomic) long long mediaType; 
@property (nonatomic,copy) NSString * sourceId; 
@property (assign,nonatomic) BOOL isInfiniteDuration; 
@property (assign,nonatomic) long long uploadState; 
@property (assign,nonatomic) BOOL isZipped; 
@required
-(BOOL)isZipped;
-(void)setIv:(id)arg1;
-(void)setIsZipped:(BOOL)arg1;
-(NSString *)iv;
-(void)setIsInfiniteDuration:(BOOL)arg1;
-(long long)uploadState;
-(void)setUploadState:(long long)arg1;
-(NSString *)key;
-(void)setKey:(id)arg1;
-(NSString *)sourceId;
-(void)setSourceId:(id)arg1;
-(BOOL)isInfiniteDuration;
-(long long)mediaType;
-(void)setMediaType:(long long)arg1;
-(void)setMediaId:(id)arg1;
-(NSString *)mediaId;

@end
