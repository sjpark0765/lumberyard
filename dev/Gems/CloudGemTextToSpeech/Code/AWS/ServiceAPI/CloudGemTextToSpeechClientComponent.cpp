/*
* All or portions of this file Copyright (c) Amazon.com, Inc. or its affiliates or
* its licensors.
*
* For complete copyright and license terms please see the LICENSE at the root of this
* distribution (the "License"). All use of this software is governed by the License,
* or, if provided, by the license below or the license accompanying this file. Do not
* remove or modify any license notices. This file is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*
*/

/////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////
// THIS CODE IS AUTOGENERATED, DO NOT MODIFY
/////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////

#include "StdAfx.h"


#include "AWS/ServiceAPI/CloudGemTextToSpeechClientComponent.h"

namespace CloudGemTextToSpeech {
namespace ServiceAPI {

    
    const char* LmbrAWS_CodeGen_SpeechMarksRequest_UUID= "{c7397c2d-b7a9-436c-8b8c-044d2cb09a7b}";
    
    const char* LmbrAWS_CodeGen_Component_UUID= "{9d8841c0-3c12-11e7-a62a-40e2309881ac}";
    
    const char* LmbrAWS_CodeGen_ResponseHandler_UUID= "{47010ff4-5734-4774-aeed-0b0ce8d60fc2}";
    
    const char* LmbrAWS_CodeGen_NotificationBus1_UUID= "{fcf552ee-77c6-4aa7-8d99-ac03c08a3f68}";
    
    const char* LmbrAWS_CodeGen_RequestBus1_UUID= "{f9f74ebe-f110-4597-8f6a-368e5e118d0e}";
    
    const char* LmbrAWS_CodeGen_VoiceRequest_UUID= "{61fbfb80-8fe5-4e77-a4c9-9b647a8066c6}";
    
    const char* LmbrAWS_CodeGen_VoiceUrl_UUID= "{fac68062-c264-4361-a533-1905c6a417d9}";
    

    void Configure()
    {
        // Insert any necessary CloudGemFramework configuration here
    }

    // redefs
    bool WriteJson(CloudGemFramework::JsonWriter& writer, const int& item)
    {
        return writer.Int(item);
    }

    bool WriteJson(CloudGemFramework::JsonWriter& writer, const AZStd::string& item)
    {
        return writer.String(item);
    }

    bool WriteJson(CloudGemFramework::JsonWriter& writer, const double& item)
    {
        return writer.Double(item);
    }

    
    
    bool WriteJson(CloudGemFramework::JsonWriter& writer, const VoiceRequest& item)
    {
            bool ok = true;
            ok = ok && writer.StartObject();
            
            ok = ok && writer.Key("message");
            ok = ok && WriteJson(writer, item.message);
            
            ok = ok && writer.Key("voice");
            ok = ok && WriteJson(writer, item.voice);
            
            ok = ok && writer.EndObject();
            return ok;
    }
    
    
    
    bool WriteJson(CloudGemFramework::JsonWriter& writer, const VoiceUrl& item)
    {
            bool ok = true;
            ok = ok && writer.StartObject();
            
            ok = ok && writer.Key("url");
            ok = ok && WriteJson(writer, item.url);
            
            ok = ok && writer.EndObject();
            return ok;
    }
    
    
    
    bool WriteJson(CloudGemFramework::JsonWriter& writer, const SpeechMarksRequest& item)
    {
            bool ok = true;
            ok = ok && writer.StartObject();
            
            ok = ok && writer.Key("message");
            ok = ok && WriteJson(writer, item.message);
            
            ok = ok && writer.Key("voice");
            ok = ok && WriteJson(writer, item.voice);
            
            ok = ok && writer.Key("speechMarks");
            ok = ok && WriteJson(writer, item.speechMarks);
            
            ok = ok && writer.EndObject();
            return ok;
    }
    
    

    // Generated Function Parameters
    
    bool PostTtsVoicelineRequest::Parameters::BuildRequest(CloudGemFramework::RequestBuilder& request)
    {
                bool ok = true;
                
                
                ok = ok && request.WriteJsonBodyParameter(*this);
                return ok;
    }

    bool PostTtsVoicelineRequest::Parameters::WriteJson(CloudGemFramework::JsonWriter& writer) const
    {
        bool ok = true;
        
        ok = ok && CloudGemTextToSpeech::ServiceAPI::WriteJson(writer, request_info);
        
        return ok;
    }
    
    bool PostTtsSpeechmarksRequest::Parameters::BuildRequest(CloudGemFramework::RequestBuilder& request)
    {
                bool ok = true;
                
                
                ok = ok && request.WriteJsonBodyParameter(*this);
                return ok;
    }

    bool PostTtsSpeechmarksRequest::Parameters::WriteJson(CloudGemFramework::JsonWriter& writer) const
    {
        bool ok = true;
        
        ok = ok && CloudGemTextToSpeech::ServiceAPI::WriteJson(writer, request_info);
        
        return ok;
    }
    




    // CloudGemTextToSpeechNotificationBus
    
    
    void CloudGemTextToSpeechNotifications::OnPostTtsVoicelineRequestSuccess(const VoiceUrl response) { }
    
    void CloudGemTextToSpeechNotifications::OnPostTtsVoicelineRequestError(const CloudGemFramework::Error error) { }
    
    
    void CloudGemTextToSpeechNotifications::OnPostTtsSpeechmarksRequestSuccess(const VoiceUrl response) { }
    
    void CloudGemTextToSpeechNotifications::OnPostTtsSpeechmarksRequestError(const CloudGemFramework::Error error) { }
    


    // BehaviorContext CloudGemTextToSpeechNotificationBus handler implementation
    
    
    void BehaviorCloudGemTextToSpeechNotificationBusHandler::OnPostTtsVoicelineRequestSuccess(const VoiceUrl response)
    {
        Call(FN_OnPostTtsVoicelineRequestSuccess, response);
    }
    
    void BehaviorCloudGemTextToSpeechNotificationBusHandler::OnPostTtsVoicelineRequestError(const CloudGemFramework::Error error)
    {
        Call(FN_OnPostTtsVoicelineRequestError, error);
    }
    
    
    void BehaviorCloudGemTextToSpeechNotificationBusHandler::OnPostTtsSpeechmarksRequestSuccess(const VoiceUrl response)
    {
        Call(FN_OnPostTtsSpeechmarksRequestSuccess, response);
    }
    
    void BehaviorCloudGemTextToSpeechNotificationBusHandler::OnPostTtsSpeechmarksRequestError(const CloudGemFramework::Error error)
    {
        Call(FN_OnPostTtsSpeechmarksRequestError, error);
    }
    

    // CloudGemTextToSpeechRequestBus
    
    
    void CloudGemTextToSpeechRequests::PostTtsVoiceline(const VoiceRequest& request_info, CloudGemTextToSpeechResponseHandler* responseHandler) { }
    
    
    
    void CloudGemTextToSpeechRequests::PostTtsSpeechmarks(const SpeechMarksRequest& request_info, CloudGemTextToSpeechResponseHandler* responseHandler) { }
    
    

    // CloudGemTextToSpeechResponseHandler
    
    void CloudGemTextToSpeechResponseHandler::HandlePostTtsVoicelineSuccess(PostTtsVoicelineRequestJob* job, AZ::EntityId entityId)
    {
        
        EBUS_EVENT_ID(entityId, CloudGemTextToSpeechNotificationBus, OnPostTtsVoicelineRequestSuccess, job->result);
        
    }

    void CloudGemTextToSpeechResponseHandler::HandlePostTtsVoicelineError(PostTtsVoicelineRequestJob* job, AZ::EntityId entityId)
    {
        EBUS_EVENT_ID(entityId, CloudGemTextToSpeechNotificationBus, OnPostTtsVoicelineRequestError, job->error);
    }
    
    void CloudGemTextToSpeechResponseHandler::HandlePostTtsSpeechmarksSuccess(PostTtsSpeechmarksRequestJob* job, AZ::EntityId entityId)
    {
        
        EBUS_EVENT_ID(entityId, CloudGemTextToSpeechNotificationBus, OnPostTtsSpeechmarksRequestSuccess, job->result);
        
    }

    void CloudGemTextToSpeechResponseHandler::HandlePostTtsSpeechmarksError(PostTtsSpeechmarksRequestJob* job, AZ::EntityId entityId)
    {
        EBUS_EVENT_ID(entityId, CloudGemTextToSpeechNotificationBus, OnPostTtsSpeechmarksRequestError, job->error);
    }
    


    // CloudGemTextToSpeechClientComponent
    void CloudGemTextToSpeechClientComponent::Init()
    {
        m_defaultResponseHandler = AZStd::make_shared<CloudGemTextToSpeechResponseHandler>();
        CloudGemTextToSpeech::ServiceAPI::Configure();
    }

    void CloudGemTextToSpeechClientComponent::Activate()
    {
        CloudGemTextToSpeechRequestBus::Handler::BusConnect(m_entity->GetId());
    }

    void CloudGemTextToSpeechClientComponent::Deactivate()
    {
        CloudGemTextToSpeechRequestBus::Handler::BusDisconnect();
    }

    
    
    void CloudGemTextToSpeechClientComponent::PostTtsVoiceline(const VoiceRequest& request_info, CloudGemTextToSpeechResponseHandler* responseHandler)
    
    {
        // Cache our entityId in case the entity goes away
        AZ::EntityId entityId;
        if (m_entity)
        {
            entityId = m_entity->GetId();
        }

        // Cache our default response handler in case this component goes away
        AZStd::shared_ptr < CloudGemTextToSpeechResponseHandler > defaultResponseHandler = m_defaultResponseHandler;

        // Create job
        PostTtsVoicelineRequestJob* requestJob = PostTtsVoicelineRequestJob::Create(
            [responseHandler, defaultResponseHandler, entityId](PostTtsVoicelineRequestJob* successJob)
            {
                // handle success
                CloudGemTextToSpeechResponseHandler* successHandler = responseHandler ? responseHandler : defaultResponseHandler.get();
                if (successHandler)
                {
                    successHandler->HandlePostTtsVoicelineSuccess(successJob, entityId);
                }
            },
            [responseHandler, defaultResponseHandler, entityId](PostTtsVoicelineRequestJob* failedJob)
            {
                // handle error
                CloudGemTextToSpeechResponseHandler* failureHandler = responseHandler ? responseHandler : defaultResponseHandler.get();
                if (failureHandler)
                {
                    failureHandler->HandlePostTtsVoicelineError(failedJob, entityId);
                }
            }
        );
        
        requestJob->parameters.request_info = request_info;
        
        
        
        requestJob->Start();
    }
    
    
    void CloudGemTextToSpeechClientComponent::PostTtsSpeechmarks(const SpeechMarksRequest& request_info, CloudGemTextToSpeechResponseHandler* responseHandler)
    
    {
        // Cache our entityId in case the entity goes away
        AZ::EntityId entityId;
        if (m_entity)
        {
            entityId = m_entity->GetId();
        }

        // Cache our default response handler in case this component goes away
        AZStd::shared_ptr < CloudGemTextToSpeechResponseHandler > defaultResponseHandler = m_defaultResponseHandler;

        // Create job
        PostTtsSpeechmarksRequestJob* requestJob = PostTtsSpeechmarksRequestJob::Create(
            [responseHandler, defaultResponseHandler, entityId](PostTtsSpeechmarksRequestJob* successJob)
            {
                // handle success
                CloudGemTextToSpeechResponseHandler* successHandler = responseHandler ? responseHandler : defaultResponseHandler.get();
                if (successHandler)
                {
                    successHandler->HandlePostTtsSpeechmarksSuccess(successJob, entityId);
                }
            },
            [responseHandler, defaultResponseHandler, entityId](PostTtsSpeechmarksRequestJob* failedJob)
            {
                // handle error
                CloudGemTextToSpeechResponseHandler* failureHandler = responseHandler ? responseHandler : defaultResponseHandler.get();
                if (failureHandler)
                {
                    failureHandler->HandlePostTtsSpeechmarksError(failedJob, entityId);
                }
            }
        );
        
        requestJob->parameters.request_info = request_info;
        
        
        
        requestJob->Start();
    }
    

    
    
    bool VoiceRequest::OnJsonKey(const char* key, CloudGemFramework::JsonReader& reader)
    {
        
        if (strcmp(key, "message") == 0) return reader.Accept(message);
        
        if (strcmp(key, "voice") == 0) return reader.Accept(voice);
        
        return reader.Ignore();
    }

    void VoiceRequest::Reflect(AZ::ReflectContext* reflection)
    {
        AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(reflection);

        if (serializeContext)
        {
            serializeContext->Class<VoiceRequest>()
                ->Version(1);
        }

        AZ::BehaviorContext* behaviorContext = azrtti_cast<AZ::BehaviorContext*>(reflection);
        if (behaviorContext)
        {
            behaviorContext->Class<VoiceRequest>("CloudGemTextToSpeech_VoiceRequest")
                ->Attribute(AZ::Script::Attributes::Storage, AZ::Script::Attributes::StorageType::Value)
            
                ->Property("message", BehaviorValueProperty(&VoiceRequest::message))
            
                ->Property("voice", BehaviorValueProperty(&VoiceRequest::voice))
            
            ;
        }
    }
    
    
    
    bool VoiceUrl::OnJsonKey(const char* key, CloudGemFramework::JsonReader& reader)
    {
        
        if (strcmp(key, "url") == 0) return reader.Accept(url);
        
        return reader.Ignore();
    }

    void VoiceUrl::Reflect(AZ::ReflectContext* reflection)
    {
        AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(reflection);

        if (serializeContext)
        {
            serializeContext->Class<VoiceUrl>()
                ->Version(1);
        }

        AZ::BehaviorContext* behaviorContext = azrtti_cast<AZ::BehaviorContext*>(reflection);
        if (behaviorContext)
        {
            behaviorContext->Class<VoiceUrl>("CloudGemTextToSpeech_VoiceUrl")
                ->Attribute(AZ::Script::Attributes::Storage, AZ::Script::Attributes::StorageType::Value)
            
                ->Property("url", BehaviorValueProperty(&VoiceUrl::url))
            
            ;
        }
    }
    
    
    
    bool SpeechMarksRequest::OnJsonKey(const char* key, CloudGemFramework::JsonReader& reader)
    {
        
        if (strcmp(key, "message") == 0) return reader.Accept(message);
        
        if (strcmp(key, "voice") == 0) return reader.Accept(voice);
        
        if (strcmp(key, "speechMarks") == 0) return reader.Accept(speechMarks);
        
        return reader.Ignore();
    }

    void SpeechMarksRequest::Reflect(AZ::ReflectContext* reflection)
    {
        AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(reflection);

        if (serializeContext)
        {
            serializeContext->Class<SpeechMarksRequest>()
                ->Version(1);
        }

        AZ::BehaviorContext* behaviorContext = azrtti_cast<AZ::BehaviorContext*>(reflection);
        if (behaviorContext)
        {
            behaviorContext->Class<SpeechMarksRequest>("CloudGemTextToSpeech_SpeechMarksRequest")
                ->Attribute(AZ::Script::Attributes::Storage, AZ::Script::Attributes::StorageType::Value)
            
                ->Property("message", BehaviorValueProperty(&SpeechMarksRequest::message))
            
                ->Property("voice", BehaviorValueProperty(&SpeechMarksRequest::voice))
            
                ->Property("speechMarks", BehaviorValueProperty(&SpeechMarksRequest::speechMarks))
            
            ;
        }
    }
    
    
}
}