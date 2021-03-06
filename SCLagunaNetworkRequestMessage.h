/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:16 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Snapchat/Snapchat-Structs.h>
@class NSArray, VLKAmbaRequest, NSString;

@interface SCLagunaNetworkRequestMessage : NSObject {

	BOOL _wifiSharingStatusRequest;
	BOOL _analyticsFilesListRequest;
	BOOL _analyticsFilesDeleteRequest;
	NSArray* _messages;
	VLKAmbaRequest* _ambaRequest;
	NSString* _analyticsFilesGetFilename;
	NSRange _analyticsFilesGetRange;

}

@property (nonatomic,readonly) NSArray * messages;                            //@synthesize messages=_messages - In the implementation block
@property (nonatomic,readonly) VLKAmbaRequest * ambaRequest;                  //@synthesize ambaRequest=_ambaRequest - In the implementation block
@property (assign,nonatomic) BOOL wifiSharingStatusRequest;                   //@synthesize wifiSharingStatusRequest=_wifiSharingStatusRequest - In the implementation block
@property (assign,nonatomic) BOOL analyticsFilesListRequest;                  //@synthesize analyticsFilesListRequest=_analyticsFilesListRequest - In the implementation block
@property (nonatomic,copy) NSString * analyticsFilesGetFilename;              //@synthesize analyticsFilesGetFilename=_analyticsFilesGetFilename - In the implementation block
@property (assign,nonatomic) NSRange analyticsFilesGetRange;                  //@synthesize analyticsFilesGetRange=_analyticsFilesGetRange - In the implementation block
@property (assign,nonatomic) BOOL analyticsFilesDeleteRequest;                //@synthesize analyticsFilesDeleteRequest=_analyticsFilesDeleteRequest - In the implementation block
+(id)requestByBatchingRequests:(id)arg1 ;
+(id)readRequestWithFilename:(id)arg1 range:(NSRange)arg2 allowDataPacket:(BOOL)arg3 ;
+(id)mediaListRequest;
+(id)readRequestWithFilename:(id)arg1 ;
+(id)batchReadRequestWithFilename:(id)arg1 range:(NSRange)arg2 chunkSize:(unsigned long long)arg3 allowDataPacket:(BOOL)arg4 ;
+(id)firmwareWriteRequest:(id)arg1 start:(unsigned long long)arg2 ;
+(id)deletionRequestForContentNamed:(id)arg1 includeHd:(BOOL)arg2 ;
+(id)markTransferredRequestForContentNamed:(id)arg1 includeHd:(BOOL)arg2 ;
+(id)crashLogFileListRequest;
+(id)crashLogFileRequestWithFilename:(id)arg1 range:(NSRange)arg2 ;
+(id)analyticsFilesListRequest;
+(id)analyticsFilesGetWithFilename:(id)arg1 range:(NSRange)arg2 ;
+(id)analyticsFilesDeleteRequest;
+(id)startAsNeededDeletionRequest;
+(id)shareWifiCredentialsRequest;
+(id)shareWifiCredentialsStatusRequest;
+(int)_mediaTypeFromFileType:(unsigned long long)arg1 ;
+(id)_translateRange:(id)arg1 ;
+(id)_translateTransferRequest:(id)arg1 ;
+(id)_translateDeletionRequest:(id)arg1 ;
+(id)_translateMarkTransferredRequest:(id)arg1 ;
+(id)_translateLogTransferRequest:(id)arg1 ;
+(int)_translateUploadType:(int)arg1 ;
+(id)_translateMediaRequest:(id)arg1 ;
+(id)_translateLogRequest:(id)arg1 ;
+(id)_translateFirmwareUploadRequest:(id)arg1 ;
-(VLKAmbaRequest *)ambaRequest;
-(id)initWithRequestMessages:(id)arg1 ;
-(id)initWithAmbaRequest:(id)arg1 ;
-(void)setWifiSharingStatusRequest:(BOOL)arg1 ;
-(void)setAnalyticsFilesListRequest:(BOOL)arg1 ;
-(void)setAnalyticsFilesGetFilename:(NSString *)arg1 ;
-(void)setAnalyticsFilesGetRange:(NSRange)arg1 ;
-(void)setAnalyticsFilesDeleteRequest:(BOOL)arg1 ;
-(unsigned long long)expectedResponseCount;
-(id)extractOnlyVlkAmbaRequests;
-(BOOL)wifiSharingStatusRequest;
-(NSString *)analyticsFilesGetFilename;
-(NSRange)analyticsFilesGetRange;
-(BOOL)analyticsFilesListRequest;
-(BOOL)analyticsFilesDeleteRequest;
-(void)_populateMLBRequest:(id)arg1 withMessage:(id)arg2 ;
-(id)malibuRequestWithId:(unsigned long long)arg1 ;
-(NSArray *)messages;
@end

