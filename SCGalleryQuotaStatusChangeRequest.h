/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:15 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCCDGalleryQuotaStatus, SCObjectPlaceholder, NSString;

@interface SCGalleryQuotaStatusChangeRequest : NSObject {

	SCCDGalleryQuotaStatus* _galleryQuotaStatus;
	SCObjectPlaceholder* _objectPlaceholder;

}

@property (nonatomic,readonly) SCObjectPlaceholder * placeholderForCreatedGalleryQuotaStatus; 
@property (nonatomic,copy,readonly) NSString * objectID; 
@property (assign,nonatomic) int lastWarningPercentage; 
@property (assign,nonatomic) int numOfNoticesLeftForSuccessfulSave; 
@property (assign,nonatomic) int numOfSuccessSavesAfterFullGallery; 
@property (assign,nonatomic) int numOfWarningsForFullGallery; 
+(id)changeRequestForGalleryQuotaStatus:(id)arg1 ;
+(id)creationRequestWithGalleryQuotaStatus:(id)arg1 ;
+(void)deleteGalleryQuotaStatuses:(id)arg1 ;
+(void)deleteAllGalleryQuotaStatuses;
-(int)lastWarningPercentage;
-(void)setLastWarningPercentage:(int)arg1 ;
-(int)numOfNoticesLeftForSuccessfulSave;
-(void)setNumOfNoticesLeftForSuccessfulSave:(int)arg1 ;
-(int)numOfSuccessSavesAfterFullGallery;
-(void)setNumOfSuccessSavesAfterFullGallery:(int)arg1 ;
-(int)numOfWarningsForFullGallery;
-(void)setNumOfWarningsForFullGallery:(int)arg1 ;
-(id)initWithGalleryQuotaStatus:(id)arg1 ;
-(SCObjectPlaceholder *)placeholderForCreatedGalleryQuotaStatus;
-(void)setWithGalleryQuotaStatus:(id)arg1 ;
-(NSString *)objectID;
-(void)setProfile:(id)arg1 ;
@end

